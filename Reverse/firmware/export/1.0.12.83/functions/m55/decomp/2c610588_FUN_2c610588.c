/* FUN_2c610588 @ 0x2c610588 */

uint FUN_2c610588(uint *param_1,short param_2,int param_3)

{
  ushort uVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = (int)(short)(ushort)(byte)param_1[1] * (int)param_2 >> 8;
  if (param_3 <= iVar3) {
    return *param_1;
  }
  uVar2 = (uint)(byte)param_1[6];
  if ((int)(short)(ushort)(byte)param_1[(uVar2 - 1) * 2 + 1] * (int)param_2 >> 8 <= param_3) {
    return param_1[(uVar2 - 1) * 2];
  }
  if (1 < uVar2) {
    uVar4 = 1;
    do {
      iVar5 = (int)(short)(ushort)(byte)param_1[uVar4 * 2 + 1] * (int)param_2 >> 8;
      if (param_3 <= iVar5) {
        unaff_r5 = param_1[uVar4 * 2];
        unaff_r4 = param_1[uVar4 * 2 + -2];
        iVar3 = (int)(short)(ushort)(byte)param_1[uVar4 * 2 + -1] * (int)param_2 >> 8;
        iVar5 = iVar5 - iVar3;
        if (iVar5 == 0) {
          return param_1[(uVar4 - 1) * 2];
        }
        goto LAB_2c6105fe;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xff) < uVar2);
  }
  iVar5 = 0;
LAB_2c6105fe:
  uVar2 = ((short)((short)param_3 - (short)iVar3) * 0xff) / iVar5;
  uVar4 = uVar2 & 0xff;
  uVar1 = ~(ushort)uVar2 & 0xff;
  return (uVar4 * (unaff_r5 & 0xff) + (int)(short)((ushort)unaff_r4 & 0xff) * (int)(short)uVar1) *
         0x8081 >> 0x17 & 0xff |
         (((uVar4 * ((unaff_r5 & 0xffff) >> 8) +
           (int)(short)(ushort)(byte)(unaff_r4 >> 8) * (int)(short)uVar1) * 0x8081 & 0x7fffffff) >>
         0x17) << 8 |
         (((uVar4 * ((unaff_r5 & 0xffffff) >> 0x10) +
           (int)(short)(ushort)(byte)(unaff_r4 >> 0x10) * (int)(short)uVar1) * 0x8081 & 0x7fffffff)
         >> 0x17) << 0x10 | 0xff000000;
}

