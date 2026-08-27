/* FUN_1409d518 @ 0x1409d518 */

void FUN_1409d518(uint param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  pcVar3 = (char *)FUN_1409dbc8();
  puVar1 = DAT_1409d5bc;
  if (((byte)pcVar3[1] != param_1) || (*pcVar3 != '\x01')) {
    uVar5 = 0x2eb;
    uVar4 = DAT_1409d5b0;
LAB_1409d536:
    FUN_1402a6e8(4,uVar5,DAT_1409d5b8,DAT_1409d5b4,uVar4);
    return;
  }
  if (param_2 == 1) {
    if ((DAT_1409d5bc[1] != -1) && (DAT_1409d5bc[2] == '\0')) {
      uVar5 = 0x2f1;
      uVar4 = DAT_1409d5c4;
      goto LAB_1409d536;
    }
LAB_1409d560:
    uVar6 = 1;
    DAT_1409d5bc[2] = 1;
  }
  else {
    switch(param_2) {
    case 3:
    case 10:
      uVar6 = 0;
      DAT_1409d5bc[2] = 0;
      break;
    case 4:
    case 8:
    case 0xb:
      goto LAB_1409d560;
    default:
      uVar6 = DAT_1409d5bc[2];
    }
  }
  uVar2 = DAT_1409d5c0;
  uVar5 = DAT_1409d5b8;
  uVar4 = DAT_1409d5b4;
  puVar1[1] = (char)param_1;
  *puVar1 = 1;
  FUN_1402a6e8(4,0x305,uVar5,uVar4,uVar2,param_1,uVar6);
  return;
}

