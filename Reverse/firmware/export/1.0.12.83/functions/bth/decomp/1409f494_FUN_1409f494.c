/* FUN_1409f494 @ 0x1409f494 */

undefined4 FUN_1409f494(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = (uint *)*DAT_1409f4f0;
  uVar4 = *puVar5;
  if (uVar4 == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    iVar3 = uVar2 * 0x72;
    iVar1 = FUN_140db784(param_2,iVar3 + 0x5b + (int)puVar5,0x10);
    uVar2 = uVar2 + 1 & 0xff;
    if (iVar1 == 0) {
      *param_1 = *(undefined4 *)((int)puVar5 + iVar3 + 0x1a);
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)((int)puVar5 + iVar3 + 0x1e);
      return 1;
    }
  } while (uVar2 < uVar4);
  return 0;
}

