/* FUN_100b63f0 @ 0x100b63f0 */

uint FUN_100b63f0(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = DAT_100b6470;
  if (param_1 == 0) {
    uVar6 = param_2;
    uVar3 = FUN_100a05a8(*(undefined4 *)(*DAT_100b6470 + 0xc));
    uVar2 = uVar3;
    if (param_2 <= uVar3) {
      uVar3 = param_2;
      uVar2 = param_2;
    }
    for (; param_2 = uVar2, uVar3 != 0; uVar3 = uVar3 - 1) {
      FUN_100a0654(*(undefined4 *)(*piVar1 + 0xc),&stack0xffffffdf,1,*piVar1,param_1,uVar6);
      uVar2 = param_2;
    }
  }
  else {
    iVar4 = thunk_FUN_10115958();
    piVar1 = DAT_100b6470;
    uVar3 = param_2;
    while (uVar3 != 0) {
      iVar5 = FUN_100a0654(*(undefined4 *)(*piVar1 + 0xc),param_1,uVar3);
      if (0 < iVar5) {
        uVar3 = uVar3 - iVar5;
        param_1 = param_1 + iVar5;
      }
      iVar5 = thunk_FUN_10115958();
      if (param_3 <= (uint)(iVar5 - iVar4)) {
        if (uVar3 == 0) {
          return param_2;
        }
        return param_2 - uVar3;
      }
      FUN_1011dbc8(1);
    }
  }
  return param_2;
}

