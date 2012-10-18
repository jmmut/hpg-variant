/*
 * Copyright (c) 2012 Cristina Yenyxe Gonzalez Garcia (ICM-CIPF)
 * Copyright (c) 2012 Ignacio Medina (ICM-CIPF)
 *
 * This file is part of hpg-variant.
 *
 * hpg-variant is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * hpg-variant is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with hpg-variant. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MAIN_H
#define MAIN_H

/** 
 * @file main.h
 * @brief Entry point of the application
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <argtable2.h>

#include "error.h"
#include "shared_options.h"
#include "hpg_variant_utils.h"
#include "vcf-tools/vcf_tools.h"


/* ***********************
 *     Available tools   *
 * ***********************/

int call(void);

int effect(int argc, char *argv[], const char *configuration_file);

int functional_analysis(void);

int genomic_analysis(int argc, char *argv[], const char *configuration_file);

int pathway_analysis(void);

int vcf_handling(int argc, char *argv[], const char *configuration_file);


#endif
