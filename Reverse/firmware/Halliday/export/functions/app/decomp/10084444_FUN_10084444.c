/* FUN_10084444 @ 0x10084444 */

uint FUN_10084444(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  
  pbVar6 = (byte *)*param_1;
  pbVar3 = pbVar6;
  if (pbVar6 != (byte *)0x0) {
    do {
      pbVar5 = pbVar3;
      if (*pbVar5 < 0x20) {
        return (uint)*DAT_100844bc;
      }
      pbVar3 = pbVar5 + 1;
    } while (*pbVar5 != 0x3a);
    uVar2 = *pbVar6 - 0x30;
    if ((uVar2 < 10) && (pbVar5 == pbVar6 + 1)) {
      if (uVar2 < 5) {
LAB_100844a6:
        *param_1 = pbVar5 + 1;
        return uVar2;
      }
    }
    else {
      uVar2 = 0;
      puVar7 = DAT_100844b8;
      do {
        pbVar3 = pbVar6;
        pbVar8 = (byte *)*puVar7;
        do {
          uVar4 = (uint)*pbVar3;
          bVar1 = *pbVar8;
          if (uVar4 - 0x61 < 0x1a) {
            uVar4 = uVar4 - 0x20 & 0xff;
          }
          if (bVar1 == 0) {
            if (pbVar5 + 1 == pbVar3 + 1) goto LAB_100844a6;
            break;
          }
          pbVar3 = pbVar3 + 1;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 == bVar1);
        uVar2 = uVar2 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar2 != 5);
    }
  }
  return 0xffffffff;
}

