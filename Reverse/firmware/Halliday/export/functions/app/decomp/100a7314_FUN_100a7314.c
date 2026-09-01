/* FUN_100a7314 @ 0x100a7314 */

uint FUN_100a7314(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *DAT_100a7358;
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(iVar1 + 2);
    if (param_2 <= *(byte *)(iVar1 + 2)) {
      uVar2 = param_2;
    }
    switch(param_1) {
    case 2:
    case 3:
    case 6:
    case 0xe:
    case 0xf:
    case 0x15:
    case 0x16:
      iVar1 = *(int *)(iVar1 + 0x10);
      break;
    case 4:
    case 0x18:
      iVar1 = *(int *)(iVar1 + 0x28);
      break;
    case 5:
      iVar1 = *(int *)(iVar1 + 0x18);
      break;
    default:
      goto switchD_100a7328_caseD_7;
    }
    param_2 = (uint)*(short *)(iVar1 + uVar2 * 2);
  }
switchD_100a7328_caseD_7:
  return param_2;
}

