# climate_data workshop

Acquisition of environmental data using electronic boards: 
- Arduino UNO R3 + DHT 11 sensor
- Arduino NANO 33 BLE Sense
Environmental data of temperature, humidity and brightness were acquired. 

|       | HTS221 |          |  DHT11    |          |
| ----- | ------ | -------- | ---- | -------- |
|       | TEMP   | HUMIDITY | TEMP | HUMIDITY | DELTA T | DELTA H |
| 10:00 | 25     | 23.8     | 20.9 | 19.6     | 4.1 | 4.2 |
| 11:00 | 26     | 27.9     | 23.3 | 18.7     | 2.7 | 9.2 |
| 11:30 | 26     | 30       | 22.9 | 20.8     | 3.1 | 9.2 |
| 12:00 | 27     | 30       | 23.1 | 21.3     | 3.9 | 8.7 |
| 13:00 | 27.4   | 30       | 23.2 | 22.2     | 4.2 | 7.8 |
| 14:00 | 25.5   | 24       | 21.3 | 18.2     | 4.2 | 5.8 |
| 15:00 | 25.2   | 24.2     | 21.1 | 17.7     | 4.1 | 6.5 |
| 16:00 | 26.5   | 27.3     | 22.7 | 18.8     | 3.8 | 8.5 |
|       |        |          |      | average  | 4   | 8   |

Some tests of the HTS221 (embedded in the NANO board) and DHT11 (wired in the UNO) sensors were done, and discrepancies came out. 

Thank https://tabletomarkdown.com/convert-spreadsheet-to-markdown/ for the quick conversion of the table from Excel to markdown. 
