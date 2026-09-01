/* FUN_100c1320 @ 0x100c1320 */

void FUN_100c1320(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_100c137c;
  iVar3 = param_1 + 0x2a;
  iVar4 = param_1 * 0x20;
  uVar5 = *(undefined4 *)(iVar4 + DAT_100c137c);
  FUN_10055c2c(iVar3);
  puVar2 = (undefined4 *)(((int)&DAT_10000410 + param_1) * 4);
  *puVar2 = 0;
  FUN_10055be0(iVar3);
  *(undefined4 *)(&DAT_4000c100 + iVar4) = 1;
  FUN_1013d9c0();
  FUN_10055c2c(iVar3);
  *puVar2 = 4;
  FUN_10055be0(iVar3);
  *(undefined4 *)(iVar4 + iVar1) = uVar5;
  *(undefined4 *)(&DAT_4000c100 + iVar4) = 0x822;
  return;
}

