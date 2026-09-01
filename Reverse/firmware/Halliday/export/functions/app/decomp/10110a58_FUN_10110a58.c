/* FUN_10110a58 @ 0x10110a58 */

int FUN_10110a58(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 == (int *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_10110484(param_1,param_2,*param_6,param_6[1],*param_7,param_7[1]);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)param_3[0xe];
      if ((*param_3 == DAT_10110aac) && (param_3[4] != 0)) {
        *puVar2 = *param_7;
        puVar2[1] = param_7[1];
      }
      puVar3 = (undefined4 *)param_3[0xf];
      *param_6 = *puVar3;
      param_6[1] = puVar3[1];
      *param_7 = *puVar2;
      param_7[1] = puVar2[1];
      puVar3[6] = puVar2;
      puVar2[7] = puVar3;
    }
  }
  return iVar1;
}

