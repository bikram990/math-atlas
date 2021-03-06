#ifndef ATL_stGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,336,648,686,725,764,803,881,920,959,998,1037,1076,1115,1193,1271,1426,1582,1660,1738,1816,1894,2050,2206,2362,2518,3141,3765,4076,4388,4700,5012,6259,7506,8753,10000
 * N : 25,336,648,686,725,764,803,881,920,959,998,1037,1076,1115,1193,1271,1426,1582,1660,1738,1816,1894,2050,2206,2362,2518,3141,3765,4076,4388,4700,5012,6259,7506,8753,10000
 * NB : 1,1,19,59,67,73,75,74,74,83,83,84,84,91,95,99,131,139,139,145,145,147,147,151,155,163,164,179,183,211,219,227,267,275,275,640
 */
#define ATL_stGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 492) (nb_) = 1; \
   else if ((n_) < 667) (nb_) = 19; \
   else if ((n_) < 705) (nb_) = 59; \
   else if ((n_) < 744) (nb_) = 67; \
   else if ((n_) < 783) (nb_) = 73; \
   else if ((n_) < 842) (nb_) = 75; \
   else if ((n_) < 939) (nb_) = 74; \
   else if ((n_) < 1017) (nb_) = 83; \
   else if ((n_) < 1095) (nb_) = 84; \
   else if ((n_) < 1154) (nb_) = 91; \
   else if ((n_) < 1232) (nb_) = 95; \
   else if ((n_) < 1348) (nb_) = 99; \
   else if ((n_) < 1504) (nb_) = 131; \
   else if ((n_) < 1699) (nb_) = 139; \
   else if ((n_) < 1855) (nb_) = 145; \
   else if ((n_) < 2128) (nb_) = 147; \
   else if ((n_) < 2284) (nb_) = 151; \
   else if ((n_) < 2440) (nb_) = 155; \
   else if ((n_) < 2829) (nb_) = 163; \
   else if ((n_) < 3453) (nb_) = 164; \
   else if ((n_) < 3920) (nb_) = 179; \
   else if ((n_) < 4232) (nb_) = 183; \
   else if ((n_) < 4544) (nb_) = 211; \
   else if ((n_) < 4856) (nb_) = 219; \
   else if ((n_) < 5635) (nb_) = 227; \
   else if ((n_) < 6882) (nb_) = 267; \
   else if ((n_) < 9376) (nb_) = 275; \
   else (nb_) = 640; \
}


#endif    /* end ifndef ATL_stGetNB_geqrf */
