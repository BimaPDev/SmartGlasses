/* FUN_2c4b0246 @ 0x2c4b0246 */

int FUN_2c4b0246(float param_1,float param_2,float param_3,float param_4,short *param_5,int param_6,
                undefined4 *param_7)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_2c4b4980(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return 5;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  if (*(undefined4 **)(param_5 + 0x2c) == (undefined4 *)0x0) {
    *(undefined4 **)(param_5 + 0x2a) = puVar1;
    *(undefined4 **)(param_5 + 0x2c) = puVar1;
  }
  else {
    **(undefined4 **)(param_5 + 0x2c) = puVar1;
    *(undefined4 **)(param_5 + 0x2c) = puVar1;
  }
  pfVar2 = (float *)FUN_2c4b4980(0x20);
  if (pfVar2 != (float *)0x0) {
    pfVar2[2] = 0.0;
    *pfVar2 = param_1 + param_3;
    pfVar2[1] = param_2 + param_4;
    pfVar2[3] = 0.0;
    pfVar2[4] = 0.0;
    pfVar2[5] = 0.0;
    pfVar2[6] = 0.0;
    pfVar2[7] = 0.0;
    *(float **)(param_5 + 0x1e) = pfVar2;
    *(float **)(param_5 + 0x20) = pfVar2;
    puVar1[2] = pfVar2;
    pfVar2 = (float *)FUN_2c4b4980(0x20);
    if (pfVar2 == (float *)0x0) {
      return 5;
    }
    pfVar2[2] = 0.0;
    pfVar2[3] = 0.0;
    pfVar2[4] = 0.0;
    pfVar2[5] = 0.0;
    pfVar2[6] = 0.0;
    pfVar2[7] = 0.0;
    *pfVar2 = param_1 - param_3;
    pfVar2[1] = param_2 - param_4;
    *(float **)(param_5 + 0x1c) = pfVar2;
    *(float **)(param_5 + 0x22) = pfVar2;
    param_5[0x24] = 2;
    param_5[0x25] = 0;
    puVar1[3] = pfVar2;
    puVar1[1] = 2;
    if (param_6 != 0) {
      if (*param_5 == 0x1701) {
        iVar3 = FUN_2c4aff78(*(undefined4 *)puVar1[2],((undefined4 *)puVar1[2])[1],param_5);
        if (iVar3 != 0) {
          return iVar3;
        }
        *(undefined1 *)(*(int *)(param_5 + 0x1e) + 9) = 4;
        *(float *)(*(int *)(param_5 + 0x1e) + 0xc) = param_1;
        *(float *)(*(int *)(param_5 + 0x1e) + 0x10) = param_2;
        *(undefined4 *)puVar1[2] = *(undefined4 *)puVar1[3];
        *(undefined4 *)(puVar1[2] + 4) = *(undefined4 *)(puVar1[3] + 4);
      }
      else if (*param_5 == 0x1702) {
        **(float **)(param_5 + 0x1e) = **(float **)(param_5 + 0x1e) + param_4;
        *(float *)(*(int *)(param_5 + 0x1e) + 4) =
             *(float *)(*(int *)(param_5 + 0x1e) + 4) - param_3;
        **(float **)(param_5 + 0x1c) = **(float **)(param_5 + 0x1c) + param_4;
        *(float *)(*(int *)(param_5 + 0x1c) + 4) =
             *(float *)(*(int *)(param_5 + 0x1c) + 4) - param_3;
      }
    }
    *param_7 = puVar1;
    return 0;
  }
  return 5;
}

