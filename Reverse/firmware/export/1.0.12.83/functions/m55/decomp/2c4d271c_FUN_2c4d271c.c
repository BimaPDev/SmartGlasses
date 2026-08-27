/* FUN_2c4d271c @ 0x2c4d271c */

undefined1 * FUN_2c4d271c(undefined4 param_1,byte param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined1 *)FUN_2c4dc50c(1,0x340);
  puVar3 = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = (char)param_1;
    switch(param_1) {
    case 0:
      break;
    default:
      FUN_2c4dc570();
      return (undefined1 *)0x0;
    case 2:
      puVar1[0x7e] = param_2 & 1;
      FUN_2c4d12d8(puVar1 + 0x6c);
      puVar1[0x7f] = 1;
      *(undefined4 *)(puVar1 + 0x318) = 0;
      break;
    case 6:
    case 7:
    case 10:
      *(undefined2 *)(puVar1 + 0x92) = 0x100;
    }
    iVar2 = FUN_2c4dc50c(0x800,1);
    *(int *)(puVar1 + 0x68) = iVar2;
    if (iVar2 == 0) {
      FUN_2c4dc570(0,0);
      *(undefined4 *)(puVar1 + 0x68) = 0;
      FUN_2c4dc570(puVar1);
      puVar3 = (undefined1 *)0x0;
    }
    else if (param_3 < 2) {
      if (param_3 != 0) {
        FUN_2c4d74ac(puVar1 + 0x44,iVar2,0x800,0);
        *(undefined4 *)(puVar1 + 0x3c) = 0;
        *(undefined4 *)(puVar1 + 0x40) = 0;
        *(undefined4 *)(puVar1 + 0x60) = 0;
      }
      *(undefined4 *)(puVar1 + 0x32c) = 0;
    }
    else {
      FUN_2c4dc570(iVar2,iVar2);
      *(undefined4 *)(puVar1 + 0x68) = 0;
      puVar3 = (undefined1 *)0x0;
      FUN_2c4dc570(puVar1);
    }
  }
  return puVar3;
}

