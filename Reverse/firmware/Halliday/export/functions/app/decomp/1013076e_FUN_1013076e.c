/* FUN_1013076e @ 0x1013076e */

undefined4 FUN_1013076e(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if (iVar3 == 8) {
    if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
      if (*(undefined4 **)(param_1 + 0x94) == (undefined4 *)0x0) {
        return 0;
      }
      *(undefined4 *)param_2[1] = **(undefined4 **)(param_1 + 0x94);
    }
  }
  else {
    if ((*(char *)(param_1 + 0x9a) != '\x01') || (iVar3 != 9)) {
      if ((9 < iVar3) && (*(int *)(param_1 + 0x10) != 0)) {
        uVar2 = FUN_1013108c(*(int *)(param_1 + 0x10),iVar3,param_2[1],param_2[2]);
        return uVar2;
      }
      return 0xffffffea;
    }
    if (param_2[1] != 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        return 0;
      }
      puVar1 = (undefined1 *)FUN_1012e06e(0x31,10);
      *(undefined1 *)param_2[1] = *puVar1;
    }
  }
  return 0;
}

