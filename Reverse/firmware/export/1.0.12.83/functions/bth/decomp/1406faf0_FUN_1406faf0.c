/* FUN_1406faf0 @ 0x1406faf0 */

int FUN_1406faf0(uint param_1,undefined2 param_2,int param_3,int param_4,ushort param_5,int *param_6
                )

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int local_30;
  int local_2c;
  
  local_2c = *DAT_1406fc00;
  uVar5 = (uint)param_5;
  if ((param_1 < 2) && (iVar4 = *(int *)(DAT_1406fc04 + (param_1 + 6) * 4), iVar4 != 0)) {
    bVar1 = *(byte *)(iVar4 + 0x3a);
    bVar3 = bVar1 & 4;
    if ((bVar1 & 4) == 0) {
      uVar2 = 0x17;
    }
    else if (uVar5 < 0x40) {
      bVar3 = 0;
      uVar2 = 0x17;
    }
    else {
      bVar3 = 1;
      uVar2 = 0x40;
    }
    if (((((param_6 == (int *)0x0) || (*param_6 == 0)) || (param_6[1] == 0)) ||
        ((((param_6[2] == 0 || (param_6[3] == 0)) ||
          ((param_6[4] == 0 || ((param_6[5] == 0 || (param_6[7] == 0)))))) || (param_6[6] == 0))))
       || (((param_3 == 0 || (uVar5 < uVar2)) || (param_4 == 0)))) {
      iVar4 = 0x40;
    }
    else if (uVar5 < 0x801) {
      iVar4 = FUN_1406e284(param_1,0,1,DAT_1406fc08,0x28,&local_30);
      if (iVar4 == 0) {
        uVar2 = uVar5 - 4 & 0xffff;
        *(undefined2 *)(local_30 + 0x14) = param_2;
        *(short *)(local_30 + 0x16) = (short)param_3;
        *(char *)(local_30 + 0x1e) = (char)param_4;
        *(ushort *)(local_30 + 0x18) = param_5;
        *(short *)(local_30 + 0x1a) = (short)(uVar5 - 4);
        *(int **)(local_30 + 0x10) = param_6;
        *(undefined1 *)(local_30 + 0x1f) = 0;
        *(undefined1 *)(local_30 + 0x20) = 0;
        *(byte *)(local_30 + 0x21) = bVar3;
        *(short *)(local_30 + 0x1c) = (short)(((uVar2 - 1) + uVar5) / uVar2) + 1;
        FUN_1406e3c0(param_1);
      }
    }
    else {
      iVar4 = 0x31;
    }
  }
  else {
    iVar4 = 0x43;
  }
  if (*DAT_1406fc00 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return iVar4;
}

