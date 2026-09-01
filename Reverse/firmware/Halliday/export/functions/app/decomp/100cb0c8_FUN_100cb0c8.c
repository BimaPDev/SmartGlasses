/* FUN_100cb0c8 @ 0x100cb0c8 */

undefined4 FUN_100cb0c8(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_101334a4(DAT_100cb18c);
  if (iVar1 << 0x1e < 0) {
    if (((param_2 == (undefined2 *)0x0) || (iVar1 = FUN_1013309a(param_2), iVar1 != 0)) &&
       (iVar1 = FUN_100c6b04(), iVar1 != 0)) {
      iVar1 = FUN_100ca324(0,param_1);
      if ((iVar1 == 0) && (iVar1 = FUN_100ca10c(0,param_1), iVar1 == 0)) {
        uVar2 = 0xfffffff4;
      }
      else {
        if (param_2 == (undefined2 *)0x0) {
          iVar3 = FUN_1013352c(iVar1 + 4,0);
          if ((iVar3 != 0) && (FUN_100ca13c(iVar1), *(char *)(iVar1 + 0xd) == '\x02')) {
            FUN_100cad6c(iVar1,0);
          }
        }
        else {
          *(undefined2 *)(iVar1 + 0xa8) = *param_2;
          *(undefined2 *)(iVar1 + 0xaa) = param_2[1];
          *(undefined2 *)(iVar1 + 0xac) = param_2[2];
          *(undefined2 *)(iVar1 + 0xae) = param_2[3];
          iVar3 = FUN_101334aa(iVar1 + 4,1);
          if (-1 < iVar3 << 0x1f) {
            FUN_10133764(iVar1);
          }
        }
        if ((*(char *)(iVar1 + 0xd) == '\0') &&
           (iVar3 = FUN_101334a4(DAT_100cb18c), iVar3 << 0x1e < 0)) {
          if (param_2 != (undefined2 *)0x0) {
            FUN_100cad6c(iVar1,2);
          }
          FUN_100c71c4(0);
        }
        FUN_100ca13c(iVar1);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffffea;
    }
  }
  else {
    uVar2 = 0xfffffff5;
  }
  return uVar2;
}

