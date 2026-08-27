/* FUN_140a5484 @ 0x140a5484 */

undefined4 FUN_140a5484(undefined2 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_418;
  undefined1 auStack_416 [1026];
  int local_14;
  
  piVar1 = DAT_140a54f0;
  local_14 = *DAT_140a54ec;
  if (0x400 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a54f4,param_3,0x400,0);
  }
  local_418 = param_1;
  FUN_140e5278(auStack_416);
  uVar2 = FUN_140a4c1c(piVar1 + 3,&local_418,param_3 + 2);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    FUN_140e51b8(iVar3);
  }
  if (*DAT_140a54ec == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

