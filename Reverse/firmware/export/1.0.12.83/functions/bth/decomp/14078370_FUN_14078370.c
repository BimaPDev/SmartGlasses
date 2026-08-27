/* FUN_14078370 @ 0x14078370 */

void FUN_14078370(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  ushort uVar6;
  byte bVar7;
  ushort *puVar8;
  undefined4 local_90;
  char local_8c;
  ushort auStack_8b [51];
  int local_24;
  
  iVar3 = DAT_14078454;
  local_90 = *DAT_1407844c;
  local_8c = (char)DAT_1407844c[1];
  cVar5 = '\0';
  local_24 = *DAT_14078450;
  FUN_140e5658(auStack_8b,0,100,0);
  FUN_140e5148(*(undefined4 *)(iVar3 + 4),0xffffffff);
  uVar6 = 0xffff;
  bVar7 = 0;
  pbVar4 = (byte *)(iVar3 + 0x20);
  puVar8 = auStack_8b;
  do {
    while ((*pbVar4 & 0xf) >> 1 != param_1) {
LAB_140783be:
      pbVar4 = pbVar4 + 0x14;
      if (pbVar4 == (byte *)(iVar3 + 0x214)) goto LAB_14078402;
    }
    bVar1 = pbVar4[0xc];
    if ((bVar1 == 0) || ((int)((uint)pbVar4[1] << 0x1a) < 0)) goto LAB_140783be;
    cVar5 = cVar5 + '\x01';
    uVar2 = *(ushort *)(pbVar4 + 8);
    pbVar4[0xc] = 0;
    pbVar4 = pbVar4 + 0x14;
    *puVar8 = uVar2;
    if (cVar5 == '\x01') {
      bVar7 = bVar1;
      uVar6 = uVar2;
    }
    puVar8[1] = (ushort)bVar1;
    puVar8 = puVar8 + 2;
  } while (pbVar4 != (byte *)(iVar3 + 0x214));
LAB_14078402:
  FUN_140e52d8(*(undefined4 *)(iVar3 + 4));
  if (cVar5 != '\0') {
    local_90 = CONCAT13(cVar5 * '\x04' + '\x01',(undefined3)local_90);
    local_8c = cVar5;
    if (cVar5 == '\x01') {
      FUN_14077a84(uVar6,bVar7);
    }
    else {
      FUN_14077a18(&local_90,cVar5 * '\x04' + '\x05',0);
    }
  }
  if (*DAT_14078450 != local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

