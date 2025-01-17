/* USER CODE BEGIN 2 */
  uint16_t readValue;
  HAL_ADC_Start(&hadc1);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  HAL_ADC_PollForConversion(&hadc1,1000);
	  readValue = HAL_ADC_GetValue(&hadc1);

  	  if (readValue < 10) {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
	  }
	  else if (readValue < 80 ) {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
	  }
	  else if (readValue < 150 ) {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
	  }
	  else if (readValue < 200 ) {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
	  }
	  else if (readValue < 250 ) {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
	  }
	  else if (readValue < 300 ) {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
	  }
	  else if (readValue > 1800 ) {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
	  }
	  else if (readValue < 400 ) {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
	  }
	  else if (readValue < 500 ) {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
	  }
	  else {
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
	  }
	  HAL_Delay(50);

    /* USER CODE END WHILE */
