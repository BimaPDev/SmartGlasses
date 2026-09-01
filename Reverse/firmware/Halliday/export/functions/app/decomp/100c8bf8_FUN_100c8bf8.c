/* FUN_100c8bf8 @ 0x100c8bf8 */

undefined4 FUN_100c8bf8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  
  iVar2 = FUN_100c5d4c(0xc3a,4);
  if (iVar2 == 0) {
    return 0xffffff97;
  }
  puVar3 = (undefined1 *)FUN_100c1fe4(iVar2 + 8,4);
  *puVar3 = 1;
  puVar5 = DAT_100c8c44;
  if (param_1 != 0) {
    puVar5 = DAT_100c8c40;
  }
  uVar1 = *(undefined1 *)(puVar5 + 1);
  *(undefined2 *)(puVar3 + 1) = *puVar5;
  puVar3[3] = uVar1;
  uVar4 = FUN_100c756c(0xc3a,iVar2,uVar1,param_4);
  return uVar4;
}

