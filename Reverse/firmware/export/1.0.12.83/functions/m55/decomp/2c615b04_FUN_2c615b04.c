/* FUN_2c615b04 @ 0x2c615b04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c615b04(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  byte bStack_18;
  uint uStack_14;
  
  uStack_14 = FUN_2c6041d4(param_2);
  FUN_2c604550(param_2,0);
  FUN_2c627e28(param_2,0);
  uVar2 = func_0x2c632498(param_2);
  func_0x2c6324b0(uVar2,_LAB_2c615b84);
  FUN_2c602454(uVar2,_LAB_2c615b88,0x1c,uStack_14);
  FUN_2c627ea0(uVar2,1);
  uVar2 = func_0x2c632498(param_2);
  func_0x2c6324b0(uVar2,_LAB_2c615b8c);
  FUN_2c602454(uVar2,_LAB_2c615b90,0x1c,uStack_14);
  FUN_2c627ea0(uVar2,1);
  FUN_2c602454(param_2,_LAB_2c615b94,0x1c,0);
  piVar1 = DAT_2c60239c;
  uStack_14 = *DAT_2c602398;
  if (param_2 == 0) {
    uVar3 = 0x1c00000001;
  }
  else {
    bStack_18 = bStack_18 & 0xf0;
    uStack_24 = 0;
    iStack_20 = *DAT_2c60239c;
    uStack_2c = 0x1c;
    uStack_28 = 0;
    uStack_1c = 0;
    *DAT_2c60239c = (int)&iStack_34;
    iStack_34 = param_2;
    iStack_30 = param_2;
    uVar3 = FUN_2c602140();
    *piVar1 = iStack_20;
  }
  if ((*DAT_2c602398 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),*DAT_2c602398 ^ uStack_14,0);
}

