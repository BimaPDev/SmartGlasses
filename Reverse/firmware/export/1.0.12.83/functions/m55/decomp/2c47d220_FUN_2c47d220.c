/* FUN_2c47d220 @ 0x2c47d220 */

undefined4 FUN_2c47d220(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_3 != 0) {
    do {
      iVar2 = param_2 + iVar5;
      uVar4 = (*(ushort *)(iVar2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(iVar2 + 1) >> 8);
      switch(*(undefined1 *)(param_2 + iVar5)) {
      case 100:
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)(iVar2 + 3);
      default:
        piVar1 = DAT_2c47d340;
        break;
      case 0x65:
        uVar3 = *(uint *)(iVar2 + 3);
        param_1[1] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                     uVar3 >> 0x18;
        piVar1 = DAT_2c47d340;
        break;
      case 0x66:
        uVar3 = *(uint *)(iVar2 + 3);
        param_1[4] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                     uVar3 >> 0x18;
        piVar1 = DAT_2c47d340;
        break;
      case 0x67:
        *(bool *)((int)param_1 + 2) = *(char *)(iVar2 + 3) != '\0';
        piVar1 = DAT_2c47d340;
        break;
      case 0x69:
      case 0x71:
        param_1[2] = iVar2 + 3;
        param_1[3] = uVar4;
        piVar1 = DAT_2c47d340;
        break;
      case 0x6d:
        *(undefined1 *)(param_1 + 5) = *(undefined1 *)(iVar2 + 3);
        piVar1 = DAT_2c47d340;
        break;
      case 0x70:
        *(undefined1 *)param_1 = *(undefined1 *)(iVar2 + 3);
        piVar1 = DAT_2c47d340;
      }
      iVar5 = iVar5 + uVar4 + 3;
      DAT_2c47d340 = piVar1;
    } while (iVar5 < param_3);
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      if (1 < (uint)(iVar2 - *piVar1)) {
        FUN_2c6741e8(0x713,DAT_2c47d358,DAT_2c47d354,*piVar1,iVar2);
        iVar2 = param_1[1];
      }
      *piVar1 = iVar2;
    }
    if (iVar5 != param_3) {
      FUN_2c6741e8(0x711,DAT_2c47d35c,DAT_2c47d354);
      return 0;
    }
  }
  if (*DAT_2c47d344 != '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x108,DAT_2c47d350,DAT_2c47d34c,DAT_2c47d348,*(undefined1 *)((int)param_1 + 1),
          param_1[1],param_1[3]);
  }
  return 1;
}

