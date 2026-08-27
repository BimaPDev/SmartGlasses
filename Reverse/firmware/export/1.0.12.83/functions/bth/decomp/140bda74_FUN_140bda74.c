/* FUN_140bda74 @ 0x140bda74 */

void FUN_140bda74(int param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte local_30 [4];
  int local_2c [2];
  
  local_2c[0] = *DAT_140bdb18;
  pbVar8 = (byte *)(param_1 + 3);
  do {
    uVar2 = 2;
    local_30[2] = pbVar8[-1];
    local_30[0] = pbVar8[-3];
    local_30[1] = pbVar8[-2];
    local_30[3] = *pbVar8;
    pbVar6 = pbVar8 + -4;
    puVar7 = DAT_140bdb1c;
    while( true ) {
      bVar4 = 0;
      pbVar1 = pbVar6 + 1;
      *pbVar1 = 0;
      puVar5 = puVar7;
      pbVar9 = local_30;
      while( true ) {
        bVar3 = FUN_140bd9f8(uVar2,*pbVar9);
        bVar4 = bVar4 ^ bVar3;
        if ((byte *)local_2c == pbVar9 + 1) break;
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        pbVar9 = pbVar9 + 1;
      }
      *pbVar1 = bVar4;
      if (pbVar1 == pbVar8) break;
      uVar2 = puVar7[3];
      pbVar6 = pbVar1;
      puVar7 = puVar7 + 4;
    }
    pbVar8 = pbVar6 + 5;
  } while (pbVar8 != (byte *)(param_1 + 0x13));
  if (*DAT_140bdb18 == local_2c[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

