/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2023 Marvell.
 */

#ifndef _MVTVM_ML_STUBS_H_
#define _MVTVM_ML_STUBS_H_

#include <rte_mldev.h>

struct cnxk_ml_dev;
struct cnxk_ml_model;

enum cnxk_ml_model_type mvtvm_ml_model_type_get(struct rte_ml_model_params *params);
int mvtvm_ml_dev_configure(struct cnxk_ml_dev *cnxk_mldev, const struct rte_ml_dev_config *conf);
int mvtvm_ml_dev_close(struct cnxk_ml_dev *cnxk_mldev);
int mvtvm_ml_model_load(struct cnxk_ml_dev *cnxk_mldev, struct rte_ml_model_params *params,
			struct cnxk_ml_model *model);

int mvtvm_ml_model_get_layer_id(struct cnxk_ml_model *model, const char *layer_name,
				uint16_t *layer_id);

#endif /* _MVTVM_ML_STUBS_H_ */
