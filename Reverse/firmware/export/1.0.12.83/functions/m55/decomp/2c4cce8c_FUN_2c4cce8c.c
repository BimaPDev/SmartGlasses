/* FUN_2c4cce8c @ 0x2c4cce8c */

void FUN_2c4cce8c(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = (uint)*(byte *)(param_1 + 0xb4);
  puVar2 = (undefined1 *)(*(int *)(param_1 + 0xc0) + 0x200);
  if (*(char *)(param_1 + 0xb3) == '\x02') {
    uVar8 = 0x10;
    iVar7 = 8;
  }
  else {
    iVar7 = 1;
    uVar8 = 0x40;
  }
  iVar5 = 0;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0xc0) + uVar6 + 0x200);
  do {
    puVar3 = puVar2;
    if (uVar6 == 0) {
LAB_2c4ccecc:
      puVar3 = puVar2 + (uVar6 - 1);
      do {
        puVar3[1] = 0;
        puVar4 = puVar3 + (2 - (int)puVar2);
        puVar3 = puVar3 + 1;
      } while ((int)puVar4 < (int)uVar8);
    }
    else {
      do {
        puVar4 = puVar3 + 1;
        *puVar3 = 0xb;
        puVar3 = puVar4;
      } while (puVar4 != puVar1);
      if (uVar6 < uVar8) goto LAB_2c4ccecc;
    }
    iVar5 = iVar5 + 1;
    puVar2 = puVar2 + uVar8;
    puVar1 = puVar1 + uVar8;
    if (iVar7 == iVar5) {
      return;
    }
  } while( true );
}

