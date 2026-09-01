/* FUN_1007c7a4 @ 0x1007c7a4 */

void FUN_1007c7a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = DAT_1007c840;
  if (((*(byte *)(DAT_1007c840 + 0x13e) & 1) != 0) && (*(char *)(DAT_1007c840 + 0x13f) == '\x01')) {
    if ((*(char *)(DAT_1007c840 + 0x141) == '\x02') || (*(char *)(DAT_1007c840 + 0x141) == '\x04'))
    {
      bVar2 = *(byte *)(DAT_1007c840 + 0x143);
      if (bVar2 < *(byte *)(DAT_1007c840 + 9)) {
        iVar7 = FUN_1007c5fc();
        iVar8 = FUN_1007c5fc(bVar2);
        if (iVar8 + 0x3c <= iVar7) {
          iVar7 = iVar8 + 0x3c;
        }
        uVar6 = FUN_1007c690(iVar7);
        iVar5 = DAT_1007c848;
        iVar4 = DAT_1007c844;
        *(undefined1 *)(iVar3 + 0x143) = uVar6;
        FUN_100a5b78(DAT_1007c84c | (iVar4 - iVar5) * 0x20 & 0xff00U,DAT_1007c854,DAT_1007c850,iVar8
                     ,iVar7,uVar6,param_3);
        FUN_1007cb20(*(undefined1 *)(iVar3 + 0x143));
        return;
      }
      pbVar1 = (byte *)(DAT_1007c840 + 0x13e);
      *(byte *)(DAT_1007c840 + 0x143) = *(byte *)(DAT_1007c840 + 9);
      *(byte *)(iVar3 + 0x13e) = *pbVar1 & 0xfe;
    }
    else {
      *(byte *)(DAT_1007c840 + 0x13e) = *(byte *)(DAT_1007c840 + 0x13e) & 0xfe;
    }
  }
  return;
}

