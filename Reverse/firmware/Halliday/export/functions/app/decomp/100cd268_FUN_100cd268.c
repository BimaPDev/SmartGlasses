/* FUN_100cd268 @ 0x100cd268 */

uint FUN_100cd268(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  uint extraout_r2;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = DAT_100cd300;
  puVar1 = DAT_100cd2ec;
  if (param_1 != 0) {
    if (*(ushort *)(param_1 + 0x10) != 0) {
      return (uint)*(ushort *)(param_1 + 0x10);
    }
    uVar3 = 0;
    puVar4 = DAT_100cd2f0;
    uVar5 = 1;
    uVar8 = param_4;
    while( true ) {
      if (puVar1 < puVar4) {
        FUN_10119dc2(DAT_100cd2f8,DAT_100cd2f4,uVar2,0x59d,uVar3,param_2,param_3,param_4,uVar8);
        FUN_10119dc2(DAT_100cd2fc);
        FUN_1011a1f0(uVar2,0x59d,param_3,param_4);
        param_2 = extraout_r1;
        param_3 = extraout_r2;
      }
      if (puVar1 <= puVar4) break;
      uVar7 = *puVar4;
      uVar6 = puVar4[1];
      if ((param_1 < uVar7) || (param_2 = 0x14, (uVar6 * 0x14 + uVar7) - 0x14 < param_1)) {
        param_4 = uVar5 + uVar6;
        uVar3 = param_4 & 0xffff;
      }
      else {
        param_3 = 0;
        while( true ) {
          param_4 = uVar5 + param_3;
          uVar3 = param_4 & 0xffff;
          if (param_3 == uVar6) break;
          if (param_1 == param_3 * 0x14 + uVar7) {
            return uVar3;
          }
          param_3 = param_3 + 1;
        }
      }
      puVar4 = puVar4 + 2;
      uVar5 = uVar3;
    }
  }
  return 0;
}

