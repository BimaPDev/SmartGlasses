/* FUN_10069118 @ 0x10069118 */

void FUN_10069118(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_1011a71c(DAT_10069140,7,param_3,param_4,param_4);
  puVar2 = DAT_10069148;
  puVar1 = DAT_10069144;
  if (param_2 != 0) {
    *DAT_10069148 = *DAT_10069144;
    if (param_1 == 0) {
      puVar2[-0xe] = puVar1[1];
      *DAT_1006914c = puVar1[2];
    }
  }
  return;
}

