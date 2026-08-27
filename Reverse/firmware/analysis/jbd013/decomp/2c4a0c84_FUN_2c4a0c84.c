/* FUN_2c4a0c84 @ 0x2c4a0c84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a0c84(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  uint uStack_28;
  undefined4 uStack_24;
  
  uVar4 = _LAB_2c4a0d70;
  uVar3 = DAT_2c4a0d68;
  uVar2 = _LAB_2c4a0d64;
  puVar1 = _LAB_2c4a0d60;
  uStack_24 = *_LAB_2c4a0d5c;
  while( true ) {
    uVar6 = FUN_2c646854();
    *puVar1 = uVar6;
    FUN_2c646b44(0x20);
    FUN_2c646bac(0x20,0,0xffffffff);
    iVar7 = FUN_2c4a09bc(0x184,&uStack_28);
    piVar5 = DAT_2c4a0d74;
    if (iVar7 != 0) break;
    uVar10 = uStack_28 & 0xff00;
    uStack_28 = uVar10;
    if ((*(char *)(*DAT_2c4a0d74 + 0x11) != '\0') &&
       (uVar8 = FUN_2c4a301c(), (uVar8 & uVar10 >> 8) == 0)) {
      iVar7 = *piVar5;
      bVar9 = *(char *)(iVar7 + 0x12) + 1;
      *(byte *)(iVar7 + 0x12) = bVar9;
      if (6 < bVar9) {
        if (*DAT_2c4a0d6c != 0) {
          FUN_2c6448f0();
          iVar7 = *piVar5;
        }
        *(undefined1 *)(iVar7 + 0x11) = 0;
      }
    }
    uStack_2a = 0;
    uStack_2c = (undefined1)(uStack_28 >> 8);
    uStack_2b = 1;
    FUN_2c4a06fc(&uStack_2c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x2f8,uVar3,uVar2,uVar4);
}

