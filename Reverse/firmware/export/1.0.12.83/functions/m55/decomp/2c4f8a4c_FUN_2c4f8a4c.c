/* FUN_2c4f8a4c @ 0x2c4f8a4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f8a4c(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  code *pcVar12;
  undefined2 *puVar13;
  int iStack_20;
  undefined2 *puStack_1c;
  undefined4 uStack_14;
  
  uVar7 = _LAB_2c4f8bc4;
  puVar6 = _LAB_2c4f8bc0;
  uVar5 = _LAB_2c4f8bbc;
  uVar4 = _LAB_2c4f8bb8;
  uVar3 = uRam2c4f8ba8;
  puVar2 = _LAB_2c4f8ba4;
  pcVar1 = _LAB_2c4f8ba0;
  uStack_14 = *_LAB_2c4f8b9c;
  do {
    do {
      while (*pcVar1 == '\0') {
        FUN_2c6444fc(100);
        iVar9 = FUN_2c4f9430();
        if ((iVar9 != 0) && (FUN_2c644324(&iStack_20,*puVar2,0xffffffff), iStack_20 == 0x20)) {
          uVar10 = FUN_2c4f9430();
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x100,uVar3,uVar7,uVar5,uVar4,uVar10);
        }
      }
      FUN_2c644324(&iStack_20,*puVar2,0xffffffff);
      puVar8 = puStack_1c;
    } while (iStack_20 != 0x20);
    uVar11 = (uint)(byte)*puStack_1c;
    switch((char)puStack_1c[1]) {
    case '\0':
      *puVar6 = *puVar6 & ~(1 << uVar11);
      FUN_2c4f88a8(uVar11,0,0,0,0);
      break;
    case '\x01':
      iVar9 = *(int *)(puStack_1c + 2);
      uVar10 = *(undefined4 *)(puStack_1c + 4);
      *puVar6 = 1 << uVar11 | *puVar6;
      if (iVar9 == 0) {
        puVar13 = (undefined2 *)0x0;
      }
      else {
        puVar13 = puStack_1c + 6;
      }
      FUN_2c4f88a8(uVar11,1,uVar10,puVar13,iVar9);
      break;
    case '\x03':
      if ((1 << uVar11 & *puVar6) != 0) {
        if (*(int *)(puStack_1c + 2) == 0) {
          puVar13 = (undefined2 *)0x0;
        }
        else {
          puVar13 = puStack_1c + 6;
        }
        FUN_2c4f88a8(uVar11,3,*(undefined4 *)(puStack_1c + 4),puVar13,*(int *)(puStack_1c + 2));
      }
      break;
    case '\x04':
      pcVar12 = *(code **)(_LAB_2c4f8bb4 + uVar11 * 4);
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(puStack_1c + 6,*(int *)(puStack_1c + 2) + -4,0,*(undefined4 *)(puStack_1c + 4));
      }
    }
    iVar9 = FUN_2c644388(*puVar2,puVar8);
  } while (iVar9 == 0);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xa0,uVar3,uVar7,_LAB_2c4f8bb0,_LAB_2c4f8bac,iVar9);
}

