function syncAllColumnsWithURLs() {
  const mentorSheetId = '1jaV6bD_dHce_oriuGosVVfLtu2L-wKs6KkAyCG8FWbA';
  const mentorSheetName = '24B2';
  const localSheetName = 'Extracted 24B2';

  // Open mentor's and local sheets
  const mentorSS = SpreadsheetApp.openById(mentorSheetId);
  const mentorSheet = mentorSS.getSheetByName(mentorSheetName);
  const localSS = SpreadsheetApp.getActiveSpreadsheet();
  const localSheet = localSS.getSheetByName(localSheetName) || localSS.insertSheet(localSheetName);

  // Clear previous data
  localSheet.clear();

  // Get all data and rich text values (for hyperlinks)
  const data = mentorSheet.getDataRange().getValues();
  const richData = mentorSheet.getDataRange().getRichTextValues();

  // Write header
  localSheet.appendRow(data[0]);

  // Loop through all rows (skip header)
  for (let i = 1; i < data.length; i++) {
    let row = data[i].slice(); // Copy the row
    let linkCell = richData[i][4]; // "Problem Links" is column E (index 4)

    // If the cell says "Link" and has a URL, replace with actual URL
    if (linkCell && linkCell.getText() === 'Link' && linkCell.getLinkUrl()) {
      row[4] = linkCell.getLinkUrl();
    }
    // If cell is already a URL, keep as is
    else if (typeof row[4] === 'string' && row[4].startsWith('http')) {
      // do nothing, already a URL
    }
    // Otherwise, keep as is (could be blank or "Link" without hyperlink)
    localSheet.appendRow(row);
  }
}
