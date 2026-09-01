/* FUN_101339e6 @ 0x101339e6 */

undefined4 FUN_101339e6(int param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 < 2) {
    iVar2 = FUN_100c5d4c(0x80b,7);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_100c1fe4(iVar2 + 8,7);
      *puVar3 = 0;
      *(undefined4 *)((int)puVar3 + 3) = 0;
      *puVar3 = *(undefined4 *)(param_1 + 0x90);
      uVar1 = *(undefined2 *)(param_1 + 0x94);
      *(char *)((int)puVar3 + 6) = (char)param_2;
      *(undefined2 *)(puVar3 + 1) = uVar1;
      uVar4 = FUN_100c756c(0x80b,iVar2);
      return uVar4;
    }
    uVar4 = 0xfffffff4;
  }
  else {
    uVar4 = 0xffffffea;
  }
  return uVar4;
}

