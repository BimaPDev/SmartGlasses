/* FUN_1008e790 @ 0x1008e790 */

void FUN_1008e790(ushort *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  byte *pbVar5;
  ushort *puVar6;
  ushort uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar6 = DAT_1008e85c;
  pbVar5 = DAT_1008e858;
  puVar4 = DAT_1008e854;
  puVar3 = DAT_1008e850;
  pbVar2 = DAT_1008e848;
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar10 = (uint)(byte)uVar1;
  if ((param_3 < 0xfd) && (2 < uVar10)) {
    if (2 < param_3) {
      if (uVar10 < 0xfd) {
        if ((((*DAT_1008e848 != param_3) || (*DAT_1008e858 != uVar10)) ||
            ((uint)*DAT_1008e85c != (param_2 & 0xffff))) || (*DAT_1008e84c != uVar7)) {
          *DAT_1008e84c = uVar7;
          *pbVar5 = (byte)uVar1;
          uVar10 = (0xff - uVar10) * (0xff - param_3) ^ 0xff00;
          uVar9 = (uVar10 & 0xffff) >> 8;
          *pbVar2 = (byte)param_3;
          *puVar6 = (ushort)param_2;
          *puVar3 = (char)(uVar10 >> 8);
          uVar7 = FUN_1012828e(param_2,uVar7,(param_3 * 0xff & 0xffff) / uVar9 & 0xff,uVar9,param_4)
          ;
          *puVar4 = uVar7;
        }
        uVar7 = *puVar4;
        uVar8 = *puVar3;
      }
      else {
        uVar7 = FUN_1012828e(param_2,uVar7,param_3,uVar7,param_4);
        uVar8 = 0xff;
      }
      *(undefined1 *)(param_1 + 1) = uVar8;
    }
  }
  else {
    *(byte *)(param_1 + 1) = (byte)param_3;
    uVar7 = (ushort)param_2;
  }
  if (2 < (byte)param_1[1]) {
    *(char *)param_1 = (char)uVar7;
    *(char *)((int)param_1 + 1) = (char)(uVar7 >> 8);
  }
  return;
}

