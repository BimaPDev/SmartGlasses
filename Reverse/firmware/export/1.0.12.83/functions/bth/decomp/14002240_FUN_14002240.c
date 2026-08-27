/* FUN_14002240 @ 0x14002240 */

undefined4 FUN_14002240(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  
  uVar1 = FUN_14001a5c();
  *(undefined4 *)(DAT_14002294 + param_1 * 4) = uVar1;
  if (((param_2 != 0) && (*(char *)(DAT_14002298 + param_1) != '\0')) &&
     (iVar2 = FUN_14001a94(param_1), iVar2 != 0)) {
    return 1;
  }
  FUN_1400175c(param_1);
  uVar1 = extraout_r2;
  if (*(char *)(DAT_1400229c + param_1) != '\0') {
    FUN_140017d0(param_1);
    uVar1 = extraout_r2_00;
  }
  if ((*(uint *)(DAT_140022a0 + param_1 * 4) & 0x1000) == 0) {
    return 0;
  }
  FUN_14001c8c(param_1,0,uVar1,DAT_140022a0,param_4);
  return 0;
}

