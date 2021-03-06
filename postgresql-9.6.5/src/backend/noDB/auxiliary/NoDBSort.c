/*
                        NoDB Project 
        Query Processing On Raw Data Files using PostgresRAW

                   Copyright (c) 2011-2013
  Data Intensive Applications and Systems Labaratory (DIAS)
           Ecole Polytechnique Federale de Lausanne

                     All Rights Reserved.

Permission to use, copy, modify and distribute this software and its
documentation is hereby granted, provided that both the copyright notice
and this permission notice appear in all copies of the software, derivative
works or modified versions, and any portions thereof, and that both notices
appear in supporting documentation.

This code is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE. THE AUTHORS AND ECOLE POLYTECHNIQUE FEDERALE DE LAUSANNE
DISCLAIM ANY LIABILITY OF ANY KIND FOR ANY DAMAGES WHATSOEVER RESULTING FROM THE
USE OF THIS SOFTWARE.
*/


#include "noDB/auxiliary/NoDBSort.h"

#if defined(NODB_MYSQL)
#include <my_sys.h>

void NoDBQuickSort(void *base, size_t nmemb, size_t size, int(*compar) (const void *, const void *))
{
    my_qsort(base, nmemb, size, compar);
}

#else
#include <stdlib.h>

void NoDBQuickSort(void *base, size_t nmemb, size_t size, int(*compar) (const void *, const void *))
{
    qsort(base, nmemb, size, compar);
}
#endif
