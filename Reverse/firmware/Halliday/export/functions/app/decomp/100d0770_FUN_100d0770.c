/* FUN_100d0770 @ 0x100d0770 */

undefined4 FUN_100d0770(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_100c9b88(param_1 + 0x6a,4);
  piVar1 = DAT_100d07c4;
  if (iVar2 == 0) {
    iVar2 = DAT_100d07c0 * ((uint)param_1[0x6a] / DAT_100d07c0);
    *(undefined1 *)(param_1 + 0x6b) = 0;
    piVar3 = (int *)*piVar1;
    param_1[0x6a] = param_1[0x6a] - iVar2;
    uVar4 = 0;
    if ((piVar3 != (int *)0x0) && (uVar4 = 0, *piVar3 != 0)) {
      FUN_10135440(param_1 + 0x35,0xb);
      (**(code **)*piVar1)(*param_1,param_1[0x6a]);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 8;
  }
  return uVar4;
}

