/* FUN_2c458ffa @ 0x2c458ffa */

void FUN_2c458ffa(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 unaff_r4;
  int unaff_r7;
  
  *(char *)(param_1 + 2) = (char)unaff_r4;
  uRam2c4593bc = (undefined2)param_1;
  *(undefined2 *)(param_1 + 0x34) = unaff_r4;
  *(char *)(unaff_r7 + param_2) = (char)unaff_r4;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xcb,0x2c459014);
  (*pcVar1)();
}

