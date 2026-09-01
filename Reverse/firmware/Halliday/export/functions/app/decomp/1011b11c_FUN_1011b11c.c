/* FUN_1011b11c @ 0x1011b11c */

undefined4 FUN_1011b11c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 4);
  *(char *)(puVar1 + 4) = (char)param_2;
  if (param_2 != 0) {
    FUN_1011b0a8(*puVar1);
  }
  return 0;
}

