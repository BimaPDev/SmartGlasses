/* FUN_1011d78a @ 0x1011d78a */

undefined4 FUN_1011d78a(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar3 = 0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x20);
      iVar1 = *(int *)(param_2 + 0x68);
      iVar4 = param_2 + 0x28;
      *(uint *)(param_2 + 0x20) = uVar2 + iVar1 * 8;
      *(uint *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + (uint)CARRY4(uVar2,iVar1 * 8);
      uVar2 = iVar1 + 1;
      *(uint *)(param_2 + 0x68) = uVar2;
      *(undefined1 *)(iVar1 + param_2 + 0x28) = 0x80;
      if (0x38 < uVar2) {
        thunk_FUN_1011ea48(uVar2 + iVar4,0,0x40 - uVar2);
        FUN_1006380c(param_2,iVar4);
        *(undefined4 *)(param_2 + 0x68) = 0;
      }
      thunk_FUN_1011ea48(*(int *)(param_2 + 0x68) + iVar4,0,0x38 - *(int *)(param_2 + 0x68));
      uVar2 = *(uint *)(param_2 + 0x20);
      uVar3 = *(undefined4 *)(param_2 + 0x24);
      *(uint *)(param_2 + 100) =
           uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
      ;
      *(char *)(param_2 + 99) = (char)uVar3;
      *(char *)(param_2 + 0x62) = (char)((uint)uVar3 >> 8);
      *(char *)(param_2 + 0x60) = (char)((uint)uVar3 >> 0x18);
      *(char *)(param_2 + 0x61) = (char)((uint)uVar3 >> 0x10);
      FUN_1006380c(param_2,iVar4);
      puVar5 = (undefined4 *)(param_2 + -4);
      iVar1 = param_1 + 4;
      do {
        puVar5 = puVar5 + 1;
        uVar3 = *puVar5;
        iVar4 = iVar1 + 4;
        *(char *)(iVar1 + -4) = (char)((uint)uVar3 >> 0x18);
        *(char *)(iVar1 + -3) = (char)((uint)uVar3 >> 0x10);
        *(char *)(iVar1 + -2) = (char)((uint)uVar3 >> 8);
        *(char *)(iVar1 + -1) = (char)uVar3;
        iVar1 = iVar4;
      } while (iVar4 != param_1 + 0x24);
      thunk_FUN_1011ea48(param_2,0,0x70);
      uVar3 = 1;
    }
  }
  return uVar3;
}

