/* FUN_2c629ed8 @ 0x2c629ed8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c629ed8(undefined4 param_1,int param_2,int param_3,int param_4,short param_5,uint param_6,
                 byte param_7)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  pbVar3 = _LAB_2c62a0a0;
  puVar2 = _LAB_2c62a094;
  puVar5 = _LAB_2c62a090;
  uVar10 = (uint)param_7;
  param_4 = param_3 * param_5 + param_4;
  iVar6 = param_2 + param_4 * 4;
  uVar4 = *(uint *)(param_2 + param_4 * 4);
  bVar1 = *(byte *)(iVar6 + 3);
  if ((uVar10 < 0xfd) && (2 < bVar1)) {
    if (uVar10 < 3) goto LAB_2c629f06;
    if (0xfc < bVar1) {
      iVar9 = 0xff - uVar10;
      uVar4 = ((param_6 & 0xff) * uVar10 + iVar9 * (uVar4 & 0xff)) * 0x8081 >> 0x17 & 0xff |
              (((((param_6 & 0xffff) >> 8) * uVar10 + iVar9 * ((uVar4 & 0xffff) >> 8)) * 0x8081 &
               0x7fffffff) >> 0x17) << 8 |
              (((((param_6 & 0xffffff) >> 0x10) * uVar10 + iVar9 * ((uVar4 & 0xffffff) >> 0x10)) *
                0x8081 & 0x7fffffff) >> 0x17) << 0x10;
      *(undefined1 *)(iVar6 + 3) = 0xff;
      goto LAB_2c629f06;
    }
    if ((((*_LAB_2c62a0a0 == uVar10) && (*_LAB_2c62a08c == bVar1)) && (param_6 == *_LAB_2c62a090))
       && (uVar4 == *_LAB_2c62a094)) {
      uVar10 = (uint)*_LAB_2c62a098;
      puVar5 = _LAB_2c62a09c;
    }
    else {
      *_LAB_2c62a08c = bVar1;
      *puVar5 = param_6;
      *pbVar3 = param_7;
      *puVar2 = uVar4;
      uVar7 = (int)(short)(0xff - (ushort)param_7) * (int)(short)(0xff - (ushort)bVar1) ^ 0xff00;
      uVar10 = (uVar7 & 0xffff) >> 8;
      uVar8 = ((uint)param_7 * 0xff) / uVar10 & 0xff;
      iVar9 = 0xff - uVar8;
      *_LAB_2c62a098 = (byte)(uVar7 >> 8);
      puVar5 = _LAB_2c62a09c;
      *(char *)((int)_LAB_2c62a09c + 1) =
           (char)((uVar8 * ((param_6 & 0xffff) >> 8) + iVar9 * ((uVar4 & 0xffff) >> 8)) * 0x10102 >>
                 0x18);
      *(char *)((int)puVar5 + 2) =
           (char)((uVar8 * ((param_6 & 0xffffff) >> 0x10) + iVar9 * ((uVar4 & 0xffffff) >> 0x10)) *
                  0x10102 >> 0x18);
      *(char *)puVar5 = (char)((uVar8 * (param_6 & 0xff) + iVar9 * (uVar4 & 0xff)) * 0x8081 >> 0x17)
      ;
      *(undefined1 *)((int)puVar5 + 3) = 0xff;
    }
    param_6 = *puVar5;
    *(char *)(iVar6 + 3) = (char)uVar10;
  }
  else {
    *(byte *)(iVar6 + 3) = param_7;
  }
  uVar4 = param_6;
  if (uVar10 < 3) {
    return;
  }
LAB_2c629f06:
  *(char *)(param_2 + param_4 * 4) = (char)uVar4;
  *(char *)(iVar6 + 1) = (char)(uVar4 >> 8);
  *(char *)(iVar6 + 2) = (char)(uVar4 >> 0x10);
  return;
}

