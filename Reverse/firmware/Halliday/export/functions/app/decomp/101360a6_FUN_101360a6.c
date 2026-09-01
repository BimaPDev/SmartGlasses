/* FUN_101360a6 @ 0x101360a6 */

undefined4 FUN_101360a6(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  
  iVar1 = FUN_1013577a(param_1 + 0x35,3,param_3,param_1 + 0x35,param_1,param_2);
  if (((iVar1 != 0) || (iVar1 = FUN_1013577a(extraout_r3,1), iVar1 != 0)) ||
     (iVar1 = FUN_1013577a(extraout_r3_00,0xf), iVar1 != 0)) {
    FUN_100d28bc(param_1,param_2);
  }
  iVar1 = FUN_10135838(param_1,5);
  if (iVar1 == 0) {
    uVar3 = 0xffffff97;
  }
  else {
    puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8,1);
    *puVar2 = (char)param_2;
    FUN_10134022(*param_1,6,iVar1,0,0);
    uVar3 = 0;
  }
  return uVar3;
}

