/* FUN_1409ffe4 @ 0x1409ffe4 */

undefined4 FUN_1409ffe4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = DAT_140a0018;
  if (*DAT_140a0018 != 0) {
    uVar2 = FUN_140a047c();
    FUN_140e5278(*piVar1 + 0x10,param_1,0x15c,uVar2,param_4);
    FUN_140a0ebc();
    FUN_140a04dc(uVar2);
    return 0;
  }
  return 0xffffffff;
}

