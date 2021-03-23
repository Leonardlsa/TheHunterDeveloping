#ifndef SHIP_FILES
#define SHIP_FILES
//舰船表
struct ShipSort//按船种分类的常规船
{
	int shipKind;//1.Small Ship,2.Large Ship,3.Tanker
	int shipId;
	int shipTons;
	char shipName[20];
};

struct ShipSort ship[3][100]={
	{
		{1,1,1800,"Bosnia"},			{1,26,3600,"Aenos"},			{1,51,3500,"Baron Pentland"},		{1,76,2600,"City of Oxford"},
		{1,2,4100,"Rio Claro"},			{1,27,3100,"Clintonia"},		{1,52,2000 ,"Scania"},				{1,77,2600,"Thurso"},
		{1,3,1800,"Gartavon"}, 			{1,28,4700,"Stratford"},		{1,53,4700 ,"Tuva"}, 				{1,78,4400,"Frederika Lensen"},
		{1,4,4800,"Royal Sceptre"},		{1,29,2700,"Vingaland"} ,		{1,54,3200 ,"Hatasu"}, 				{1,79,2100,"Bluefields"},
		{1,5,4500,"Blairlogie"}, 		{1,30,3700,"Kyleglen"}, 		{1,55,5000 ,"Lehigh"},				{1,80,4800,"Navarino"},
		{1,6,4900,"Firby"}, 			{1,31,4800,"Bassano"},			{1,56,4900 ,"Ashby"}, 				{1,81,1100,"Viking"},
		{1,7,4000,"Aviemore"},			{1,32,4900,"Thirlby"},			{1,57,5000 ,"Empire Barracuda "},	{1,82,5000,"Broompark"},
		{1,8,5000,"Kafiristan"}, 		{1,33,2000,"Daphne"}, 			{1,58,4800 ,"Cassequel "},			{1,83,4400,"Condylis"},
		{1,9,1000,"Truro"}, 			{1,34,2700,"Tweed"},			{1,59,3300 ,"Annavore "},			{1,84,3300,"Balladier"},
		{1,10,2700,"Akenside"}, 		{1,35,5000,"Esmond"}, 			{1,60,3000 ,"Thorstrand "},			{1,85,1600,"Trolla"},
		{1,11,5000,"Stonepool"}, 		{1,36,2600,"Bengore Head"}, 	{1,61,3000 ,"Culebra"}, 			{1,86,4600,"Shaftesbury"},
		{1,12,5000,"Winkleigh"}, 		{1,37,4700,"Starcross"}, 		{1,62,4100 ,"Olinda"},			 	{1,87,3300,"Arlyn"},
		{1,13,2500,"Stanholme"}, 		{1,38,5000,"Alfred Jones"}, 	{1,63,3100 ,"Ontario"}, 			{1,88,4700,"Aeas"},
		{1,14,5000,"Arlington Court"},	{1,39,5000,"Pandias"}, 			{1,64,2400 ,"Torny"}, 				{1,89,2200,"Caribou"},
		{1,15,5000,"Sliedrecht"}, 		{1,40,4000,"Rio Azul"},			{1,65,5000 ,"Ogontz"}, 				{1,90,4700,"Woensdrecht"},
		{1,16,5000,"Counsellor"}, 		{1,41,3000,"Robert L. Holt"} ,	{1,66,5000 ,"Carabulle"}, 			{1,91,1200,"Antonico"},
		{1,17,5000,"Sheaf Mead"}, 		{1,42,4400,"Soloy"},			{1,67,5000 ,"Goncalves Dias"}, 		{1,92,4400,"Bancrest"},
		{1,18,2100,"Merisaar"},			{1,43,4800,"Vigrid"},			{1,68,4600 ,"Willimantic"}, 		{1,93,4200,"Marcrest"},
		{1,19,4000,"Stakesby"}, 		{1,44,5000,"Kinross"},			{1,69,3500 ,"Denmark"}, 			{1,94,4800,"Daydawn"},
		{1,20,4200,"Gro"}, 				{1,45,4400,"Nicolas Pateras"}, 	{1,70,4500 ,"Pontypridd"}, 			{1,95,4100,"Dayrose"},
		{1,21,2400,"Mardinian"}, 		{1,46,1300,"Erato"},			{1,71,1300 ,"Anna"}, 				{1,96,4600,"Dalcroy"},
		{1,22,3700,"Baron Blythswod"},	{1,47,5000,"Kumasian"},			{1,72,4900 ,"Rio Tercero"}, 		{1,97,2000,"Sea Glory"},
		{1,23,3700,"Graigwen"}, 		{1,48,4500,"Cape Rodney "},		{1,73,4600 ,"Leonidas M."},			{1,98,2300,"Sea Venture"},
		{1,24,1800,"Trevisa"}, 			{1,49,1200,"Clantara"},			{1,74,5000 ,"Nordal"},			 	{1,99,3700,"Baron Dechmont"},
		{1,25,3800,"Scoresby"}, 		{1,50,2100,"Spind"},			{1,75,5000 ,"Manuela"}, 			{1,100,4800,"Reedpool"}
	},
	{		
		{2,1,12300,"Sultan Star"},		{2,26,7500,"Moh. Ali-Kebir"},			{2,51,7600,"Kingston Hill"},		{2,76,6200,"Fairport"},
		{2,2,5300,"SS Browning"},		{2,27,7500,"Ville de Mons"},			{2,52,11000,"Norfolk"},				{2,77,5600,"Seattle Spirit"},
		{2,3,7200,"Manaar"},			{2,28,9000,"Titan"},					{2,53,5300,"Brockley Hill"},		{2,78,8400,"Port Nicholson"},
		{2,4,5200,"Fanad Head"},		{2,29,5200,"Neptunian"},				{2,54,6300,"Grayburn"},				{2,79,7100,"Santore"},
		{2,5,5500,"Kennebec"},			{2,30,5200,"Jose de Larrinaga"},		{2,55,6000,"Anselm"},				{2,80,5900,"Cherokee"},
		{2,6,7000,"Louisiane"},			{2,31,11100,"City of Benares"},			{2,56,11300,"Abosso"},				{2,81,5500,"West Notus"},
		{2,7,9200,"Lochavon"},			{2,32,6900,"Corrientes"},				{2,57,5400,"Harlingen"},			{2,82,6300,"Polyphemus"},
		{2,8,10000,"Bretagne"},			{2,33,9300,"Hurunui"},					{2,58,7500,"Empire Hudson"},		{2,83,6800,"Berganger"},
		{2,9,5200,"Vermont"},			{2,34,4230," Empress of Britain"},		{2,59,7500,"Empire Wave"},			{2,84,6000,"Raphael Semmes"},
		{2,10,7200,"City of Mandalay"},	{2,35,5400,"Balzac"},					{2,60,9500,"Vancouver Island"},		{2,85,5900,"City of Birmingham"},
		{2,11,10000,"Yorkshire"},		{2,36,5400,"Matina"},					{2,61,6700,"Treverbyn"},			{2,86,6800,"Moldanger"},
		{2,12,7200,"Clan Chisholm"},	{2,37,18700,"Laurentic"},				{2,62,5100,"King Malcolm"},			{2,87,8600,"Surrey"},
		{2,13,8000,"Malabar"},			{2,38,7500,"Ville d’ Arlon"},			{2,63,8500,"Nottingham"},			{2,88,5900,"Port Montreal"},
		{2,14,5300,"Bronte"},			{2,39,10900,"Rotorua"},					{2,64,5300,"Silverbelle"},			{2,89,8400,"Santa Rita"},
		{2,15,9900,"Beaverburn"},		{2,40,10100,"Napier Star"},				{2,65,6300,"Sagadahoc"},			{2,90,7200,"Alexander Macomb"},
		{2,16,7000,"Rothesay Castle"},	{2,41,6000,"Empire Thunder"},			{2,66,5600,"Thornliebank"},			{2,91,8300,"Chilore"},
		{2,17,6300,"Gustaf E. Reuter"},	{2,42,1060," Zealandic"},				{2,67,14600,"Ulysses"},				{2,92,7200,"William C Bryant"},
		{2,18,8800,"Navasota"},			{2,43,7500,"Ville d’ Liege"},			{2,68,12000,"Llangibbey Castle"},	{2,93,8100,"Umtata"},
		{2,19,6700,"Brandon"},			{2,44,5400,"Athenic"},					{2,69,5200,"Buarque"},				{2,94,7200,"Thomas McKean"},
		{2,20,8200,"Tajandoen"},		{2,45,10300,"Calchas"},					{2,70,7000,"Empire Howard"},		{2,95,5200,"Robert E. Lee"},
		{2,21,5100,"Royston Grange"},	{2,46,10100,"Beacon Grange"},			{2,71,6900,"Empire Comet"},			{2,96,6400,"Triglav"},
		{2,22,5200,"Cedarbank"},		{2,47,8900,"Port Hardy"},				{2,72,10000,"Jagersfontein"},		{2,97,6400,"Peiping"},
		{2,23,9600,"Protesilaus"},		{2,48,10300," Ixion"},					{2,73,6700,"Parnahyba"},			{2,98,7500,"Empire Tide"},
		{2,24,10500,"Brazza"},			{2,49,5900,"Gregalia"},					{2,74,5700,"Steel Engineer"},		{2,99,7200,"William Hooper"},
		{2,25,5200,"Clearton"},			{2,50,11800,"Rodney Star"},				{2,75,8000,"Scottsburg"},			{2,100,5500,"River Afton"}


	},

	{
		{3,1,9400,"Inverliffey"},			{3,26,6700,"La Brea"},				{3,51,12000,"Cadillac"},		{3,76,6200,"Ensis"},
		{3,2,10000,"Regent Tiger"},			{3,27,7500,"Pecten"},				{3,52,6600,"Athelbeach"},		{3,77,9500,"Kongsgaard"},
		{3,3,8500,"British Influence"},		{3,28,8400,"British Fame"},			{3,53,6200,"Erodona"},			{3,78,8800,"Maasdam"},
		{3,4,8800,"Cheyenne"},				{3,29,5800,"Sarita"},				{3,54,9300,"Franche Comte"},	{3,79,8700,"Malaya II"},
		{3,5,14000,"Emile-Miguet"},			{3,30,9200,"Invershannon"},			{3,55,6600,"Fern"},				{3,80,8000,"Anadara"},
		{3,6,11000,"Arne Kjode"},			{3,31,10000,"Torinia"},				{3,56,8100,"Beduin"},			{3,81,7500,"Bulysses"},
		{3,7,7400,"San Alberto"},			{3,32,10000,"Frederick S. Fales"},	{3,57,5700,"Venetia"},			{3,82,6500,"Tahchee"},
		{3,8,5000,"Vaclite"},				{3,33,7000,"British General"},		{3,58,8700,"Castor"},			{3,83,12800,"San Florentino"},
		{3,9,5200,"Chastine Maersk"},		{3,34,7000,"Nina Borthen"},			{3,59,7000,"British Reliance"},	{3,84,8200,"T.J. Williams"},
		{3,0,8000,"Ceronia"},				{3,35,7100,"Davanger"},				{3,60,6900,"British Viscount"},	{3,85,6300,"Barbro"},
		{3,11,7800,"Caroni River"},			{3,36,9500,"Languedoc"},			{3,61,8000,"Chama"},			{3,86,15000," Svend Foyn"},
		{3,12,9000,"Den Haag"},				{3,37,13900,"New Sevilla"},			{3,62,8100,"Conus"},			{3,87,9600,"W.C. Teagle"},
		{3,13,8000,"Imperial Transport"},	{3,38,5400,"Casanare"},				{3,63,5600,"Lincoln Ellsworth"},{3,88,6600,"Erviken"},
		{3,14,5700,"Daghestan"},			{3,39,7000,"Scottish Maiden"},		{3,64,8500,"Duffield"},			{3,89,9800,"Barfonn"},
		{3,15,2600,"Leticia"},				{3,40,5000,"Congonian"},			{3,65,8200,"Capulet"},			{3,90,9000,"Salinas"},
		{3,16,13000,"San Fernando"},		{3,41,7600,"Havbor"},				{3,66,8900,"Oilfield"},			{3,91,7000,"I.C. White"},
		{3,17,10000,"Italia"},				{3,42,8800,"Appalachee"},			{3,67,9900,"Caledonia"},		{3,92,9200,"Inverlee"},
		{3,18,9000,"Eli Knudsen"},			{3,43,12200,"Victor Ross"},			{3,68,6100,"John P. Pederson"},	{3,93,7500,"Sagona"},
		{3,19,12000,"Saranac"},				{3,44,5900,"British Premier"},		{3,69,8500,"British Security"},	{3,94,8100,"Darkdale"},
		{3,20,7500,"Moerdrecht"},			{3,45,9000,"Charles Pratt"},		{3,70,8100,"Cairndale"},		{3,95,7000,"British Mariner"},
		{3,21,9000,"Athellaird"},			{3,46,10500,"W.B. Walker"},			{3,71,6900,"British Grenadier"},{3,96,11900,"Astral"},
		{3,22,8600,"Yarraville"},			{3,47,10500,"A.F. Corwin"},			{3,72,8800,"Alfred Olsen"},		{3,97,8100,"San Demetrio"},
		{3,23,2600,"Lucretia"},				{3,48,10500,"E.R. Brown"},			{3,73,9500,"Inversuir"},		{3,98,7200,"British Resource"},
		{3,24,7000,"Scottish Minstrel"},	{3,49,7000,"Scottish Standard"},	{3,74,6000,"Wellfield"},		{3,99,8600,"Winamac"},
		{3,25,6800,"Athelcrest"},			{3,50,6900,"British Gunner"},		{3,75,10700," Pendrecht"},		{3,100,10400,"Narragansett"}

	}
};
struct NorthAmericaShipSort//按船种分类的常规船
{
	int shipKind;//1.Small Ship,2.Large Ship,3.Tanker
	int shipId;
	int shipTon;
	char shipName[20];
};
struct NorthAmericaShipSort NAship[3][20]={
	{
		{1,1,3800,"Ciltvaira"},			
		{1,2,2300,"Norvana"},			
		{1,3,1600,"Frisco"},				
		{1,4,2600,"Frances Salman"},		
		{1,5,5000,"Ocean Venture"},		
		{1,6,2400,"Orangesta"},			
		{1,7,1100,"Acacia"},				
		{1,8,1900,"Tolten"},				
		{1,9,3400,"Esparta"},			
		{1,0,4900,"Christina Knudsen"},	
		{1,11,1000,"Cythera"},			
		{1,12,4800,"Reinholt"},			
		{1,13,1300,"Taborfjell"},		
		{1,14,3500,"Delisle "},			
		{1,15,4700,"Leto"},				
		{1,16,2100,"Skottland"},			
		{1,17,3300,"Plow City"},			
		{1,18,4500,"Margot"},			
		{1,19,4500,"Zurichmoor"},	
		{1,20,2700,"Norlindo"}			
	},
	{
		{2,1,8000,"Lady Hawkins"},						
		{2,2,8000,"Venore"},							
		{2,3,5700,"West Ivis"},							
		{2,4,5400,"Friar Rock"},						
		{2,5,9600,"Gandia"},						
		{2,6,8000,"Tacoma Star"},						
		{2,7,15400,"Amerikaland"},	
		{2,8,7000,"Lihue"},
		{2,9,7900,"Arabutan"},							
		{2,10,5200,"Caryu"},							
		{2,11,8300,"City of New York"},					
		{2,12,11000,"Hertford"},						
		{2,13,5400,"Nicoya"},							
		{2,14,7500,"Greylock"},							
		{2,15,7000,"Kronprinsen"},						
		{2,16,7100,"Qu’Appelle"},						
		{2,17,6200,"Peisander"},						
		{2,18,9000,"Westmoreland"},						
		{2,19,6800,"Alcoa Puritan"},					
		{2,20,7200,"George Calvert"}
	},
	{
		{3,1,9100,"Norness"},
		{3,2,6800,"Coimbra"},
		{3,3,6600,"Allan Jackson"},
		{3,4,8200,"Malay"},
		{3,5,8100,"Empire Gem"},
		{3,6,9100,"Diala"},
		{3,7,9300,"Varanger"},		
		{3,8,7100,"Francis E. Powell"},
		{3,9,7000,"Halo"},
		{3,10,11300,"Montrolite"},
		{3,11,8300,"India Arrow"},
		{3,12,8400,"China Arrow"},
		{3,13,6200,"W.L. Steed"},
		{3,14,5300,"Republic"},
		{3,15,10200,"W.D. Anderson"},
		{3,16,8200,"Pan Massachusetts"},
		{3,17,11000,"O.A. Knudsen"},
		{3,18,8000,"Esso Nashville"},
		{3,19,11400,"Atlantic Sun"},
		{3,20,8000,"Dixie Arrow"}
	}
};
struct CapitalShipSort
{
	int awardKC;
	int shipId;
	int shipTon;
	char shipName[20];
};
struct CapitalShipSort Cship[10]={
	{1,1,22000,"CV Ark Royal*"},
	{1,2,29100,"BB Royal Oak*"},
	{0,3,18600,"CV Courageous"},
	{0,4,10000,"CA Belfast"},
	{1,5,31100,"BB Barham*"},
	{1,6,34000,"BB Nelson*"},
	{1,7,31300,"BB Malaya*"},
	{1,8,22600,"CV Eagle*"},
	{0,9,12800,"CVE Avenger"},
	{0,10,11000,"CVE Audacity"}
};


#endif
