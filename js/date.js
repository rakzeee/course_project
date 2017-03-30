				function curdate() {
					var now = new Date();
					var year = now.getFullYear();
					var month = now.getMonth() + 1;
					var day = now.getDate();
					
					if (day < 10)
						day = "0" + day;
					if (month < 10)
						month = "0" + month;
					now = year + "-" + month + "-" + day;
					return now;
				}