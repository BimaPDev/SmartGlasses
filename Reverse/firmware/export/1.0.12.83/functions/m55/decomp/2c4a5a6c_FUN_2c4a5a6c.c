/* FUN_2c4a5a6c @ 0x2c4a5a6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a5a6c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  uint uStack_28;
  undefined4 uStack_24;
  
  uVar6 = _LAB_2c4a5b50;
  uVar5 = _LAB_2c4a5b4c;
  uVar3 = _LAB_2c4a5b40;
  uVar2 = _LAB_2c4a5b3c;
  puVar1 = _LAB_2c4a5b38;
  uStack_24 = *_LAB_2c4a5b34;
  while( true ) {
    uVar7 = FUN_2c646854();
    *puVar1 = uVar7;
    FUN_2c646b44(0x20);
    FUN_2c646bac(0x20,0,0xffffffff);
    iVar8 = FUN_2c4a5988(0x16c,&uStack_28);
    piVar4 = _LAB_2c4a5b44;
    if (iVar8 != 0) break;
    iVar8 = *_LAB_2c4a5b44;
    uVar10 = uStack_28 & 0x3f;
    if (((*(char *)(iVar8 + 0xf) != '\0') && ((uStack_28 & 7) == 0)) &&
       (bVar9 = *(char *)(iVar8 + 0x10) + 1, *(byte *)(iVar8 + 0x10) = bVar9, 6 < bVar9)) {
      uStack_28 = uVar10;
      if (*_LAB_2c4a5b48 != 0) {
        FUN_2c6448f0();
        iVar8 = *piVar4;
      }
      *(undefined1 *)(iVar8 + 0xf) = 0;
      uVar10 = uStack_28;
    }
    uStack_28 = uVar10;
    uStack_2c = (undefined1)uStack_28;
    uStack_2a = 0;
    uStack_2b = 1;
    FUN_2c4a58c4(&uStack_2c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x33f,uVar3,uVar2,uVar6,uVar5,0x33f);
}

