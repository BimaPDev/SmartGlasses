/* FUN_100a1a3c @ 0x100a1a3c */

undefined4 FUN_100a1a3c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_1011ea48(DAT_100a1a74,0,0xd0);
  puVar1 = DAT_100a1a74;
  puVar3 = DAT_100a1a74;
  for (iVar4 = 0; uVar2 = DAT_100a1a78, iVar4 < param_2; iVar4 = iVar4 + 1) {
    puVar3[2] = *(undefined4 *)(param_1 + iVar4 * 4);
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3 = puVar3 + 2;
  }
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *(char *)(puVar1 + 1) = (char)param_2;
  *puVar1 = uVar2;
  return 0;
}

