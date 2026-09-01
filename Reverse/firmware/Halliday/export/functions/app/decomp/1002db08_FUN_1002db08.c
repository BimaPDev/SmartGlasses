/* FUN_1002db08 @ 0x1002db08 */

void FUN_1002db08(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  
  cVar7 = '\x03';
  iVar5 = *DAT_1002db74;
  iVar8 = DAT_1002db78;
  do {
    bVar1 = *(byte *)(iVar8 + 0x23b);
    bVar2 = *(byte *)(iVar8 + 0x23c);
    if (*(char *)(iVar8 + 0x236) != '\x02') goto LAB_1002db6a;
    iVar3 = FUN_1002da40(iVar8 + 0x236);
    if (iVar3 == 0) goto LAB_1002db6a;
    uVar4 = 2;
    cVar6 = cVar7;
    while( true ) {
      cVar7 = cVar6 + '\x01';
      FUN_100a5174((uint)bVar2 * 0xe10 + (uint)bVar1 * 0x3c,cVar6,uVar4);
      iVar8 = iVar8 + 0xe;
      if (cVar7 != '\x17') break;
      if (*DAT_1002db74 == iVar5) {
        return;
      }
      FUN_1013cdc0();
LAB_1002db6a:
      uVar4 = 1;
      cVar6 = cVar7;
    }
  } while( true );
}

