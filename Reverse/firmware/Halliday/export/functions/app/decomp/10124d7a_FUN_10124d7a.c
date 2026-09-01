/* FUN_10124d7a @ 0x10124d7a */

int FUN_10124d7a(int param_1)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar1 = FUN_10092f64(iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar3 = *(int *)(iVar1 + 0x24);
    for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0xc) + iVar2 * 4);
      if (iVar1 == param_1) {
        return 1;
      }
      iVar1 = FUN_10124944(iVar1 + 8,param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = extraout_r2;
    }
  } while( true );
}

