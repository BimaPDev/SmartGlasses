/* FUN_2c5e7538 @ 0x2c5e7538 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e7538(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_34 [8];
  undefined4 local_2c;
  
  puVar1 = _LAB_2c5e765c;
  local_2c = *_LAB_2c5e7658;
  iVar2 = FUN_2c606b94(*(undefined4 *)*_LAB_2c5e765c,1);
  iVar3 = FUN_2c606b94(*(undefined4 *)puVar1[1],1);
  iVar4 = FUN_2c606b94(*(undefined4 *)puVar1[2],1);
  iVar5 = FUN_2c606b94(*(undefined4 *)puVar1[3],1);
  iVar6 = FUN_2c606b94(*(undefined4 *)puVar1[4],1);
  iVar7 = FUN_2c606b94(*(undefined4 *)puVar1[5],1);
  iVar8 = FUN_2c606b94(*(undefined4 *)puVar1[6],1);
  iVar9 = FUN_2c606b94(*(undefined4 *)puVar1[7],1);
  if (iVar2 == 0) {
    *(undefined1 *)(puVar1 + 8) = 1;
  }
  else if (iVar3 == 0) {
    *(undefined1 *)(puVar1 + 8) = 2;
  }
  else if (iVar4 == 0) {
    *(undefined1 *)(puVar1 + 8) = 3;
  }
  else if (iVar5 == 0) {
    *(undefined1 *)(puVar1 + 8) = 4;
  }
  else if (iVar6 == 0) {
    *(undefined1 *)(puVar1 + 8) = 5;
  }
  else if (iVar7 == 0) {
    *(undefined1 *)(puVar1 + 8) = 6;
  }
  else if (iVar8 == 0) {
    *(undefined1 *)(puVar1 + 8) = 7;
  }
  else if (iVar9 == 0) {
    *(undefined1 *)(puVar1 + 8) = 8;
  }
  else {
    *(undefined1 *)(puVar1 + 8) = 0;
  }
  FUN_2c5e64a4();
  FUN_2c5e74dc(auStack_34);
  FUN_2c620fa4(0x3fd,auStack_34);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5e7668,0x1a2,_LAB_2c5e7664,_LAB_2c5e7660,*(undefined1 *)(puVar1 + 8));
}

