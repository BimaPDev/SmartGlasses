/* FUN_2c62109c @ 0x2c62109c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c62109c(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c621198,0x62,_LAB_2c6211a0,_LAB_2c62119c,_LAB_2c6211a8);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c621198,99,_LAB_2c6211a0,_LAB_2c62119c,_LAB_2c621194);
  }
  if (param_5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c621198,100,_LAB_2c6211a0,_LAB_2c62119c,_LAB_2c6211a4);
  }
  iVar2 = param_3 * param_2 * 4;
  iVar3 = iVar2 + 0x36;
  *param_5 = iVar3;
  puVar1 = (undefined2 *)lv_mem_alloc(iVar3);
  if (puVar1 != (undefined2 *)0x0) {
    *param_4 = puVar1;
    *(int *)(puVar1 + 9) = param_2;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(int *)(puVar1 + 1) = iVar3;
    puVar1[0xd] = 1;
    *(int *)(puVar1 + 0x11) = iVar2;
    *(int *)(puVar1 + 0xb) = -param_3;
    *puVar1 = 0x4d42;
    *(undefined4 *)(puVar1 + 5) = 0x36;
    *(undefined4 *)(puVar1 + 7) = 0x28;
    puVar1[0xe] = 0x20;
    FUN_2c674668(puVar1 + 0x1b,param_1,iVar2);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c621198,0x74,_LAB_2c6211a0,_LAB_2c6211ac);
}

