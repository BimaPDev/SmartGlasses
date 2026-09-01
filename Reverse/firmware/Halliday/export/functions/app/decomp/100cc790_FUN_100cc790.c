/* FUN_100cc790 @ 0x100cc790 */

undefined1 * FUN_100cc790(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = 0;
  puVar2 = DAT_100cc7d0;
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  do {
    if (param_1 == 0) {
      local_20 = 0;
      uStack_1c = uStack_1c & 0xff000000;
      iVar1 = FUN_10134500(puVar2 + 1,&local_20);
      if (iVar1 == 0) {
        return puVar2;
      }
    }
    else {
      iVar1 = FUN_10133724(param_1,*puVar2);
      if (iVar1 != 0) {
        return puVar2;
      }
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x10;
  } while (iVar3 != 9);
  return (undefined1 *)0x0;
}

