/* FUN_2c436e8a @ 0x2c436e8a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c436432) */

undefined8 FUN_2c436e8a(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *unaff_r6;
  undefined8 in_d6;
  undefined8 in_d30;
  
  VectorSub(in_d6,in_d30,1,1);
  *(undefined4 **)(param_2 + 0x30) = unaff_r6;
  *(char *)(param_3 + 4) = (char)unaff_r6;
  return CONCAT44(param_2,*unaff_r6);
}

