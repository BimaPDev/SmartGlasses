/* FUN_100a72cc @ 0x100a72cc */

uint FUN_100a72cc(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *DAT_100a7310;
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
      iVar1 = *(int *)(iVar1 + 0x14);
      break;
    case 4:
    case 0x18:
      iVar1 = *(int *)(iVar1 + 0x2c);
      break;
    case 5:
      iVar1 = *(int *)(iVar1 + 0x1c);
      break;
    default:
      goto switchD_100a72e0_caseD_7;
    }
    param_2 = *(uint *)(iVar1 + uVar2 * 4);
  }
switchD_100a72e0_caseD_7:
  return param_2;
}

