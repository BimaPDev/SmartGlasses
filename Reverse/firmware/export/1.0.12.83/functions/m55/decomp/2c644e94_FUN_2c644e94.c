/* FUN_2c644e94 @ 0x2c644e94 */

undefined4 FUN_2c644e94(char *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 == (char *)0x0) || (*param_1 != -6)) {
    FUN_2c643ba8(param_1,0xfffffffc);
    uVar2 = 0xfffffffc;
  }
  else {
    while (puVar1 = (undefined1 *)FUN_2c6449e0(param_1), puVar1 != (undefined1 *)0x0) {
      if (*(int *)(puVar1 + 4) == 0) {
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(puVar1 + 8);
        iVar3 = *(int *)(puVar1 + 8);
        if (iVar3 == 0) goto LAB_2c644ee4;
LAB_2c644eb4:
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(puVar1 + 4);
      }
      else {
        *(undefined4 *)(*(int *)(puVar1 + 4) + 8) = *(undefined4 *)(puVar1 + 8);
        iVar3 = *(int *)(puVar1 + 8);
        if (iVar3 != 0) goto LAB_2c644eb4;
LAB_2c644ee4:
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar1 + 4);
      }
      FUN_2c643bd8(param_1,0);
      *puVar1 = 0;
      FUN_2c64749c(param_1 + 0xc,puVar1);
    }
    if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 1) == -0x6d)) {
      do {
        puVar1 = (undefined1 *)FUN_2c6473bc(param_1 + 0xc);
        if (puVar1 == (undefined1 *)0x0) break;
        uVar2 = FUN_2c645b54(param_1);
        FUN_2c64621c(uVar2,0);
        iVar3 = FUN_2c645d70(uVar2);
        uVar2 = *(undefined4 *)(iVar3 + 8);
        FUN_2c674668(puVar1 + 0xc,uVar2,*(undefined4 *)(param_1 + 0x24));
        *puVar1 = 0xf9;
        puVar1[2] = 0;
        puVar1[3] = (char)*(undefined4 *)(iVar3 + 0xc);
        FUN_2c644990(param_1,puVar1);
        FUN_2c643bc4(param_1,uVar2);
      } while (*(int *)(param_1 + 8) != 0);
      FUN_2c64610c(0);
    }
    FUN_2c643be8(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

